import cv2
import numpy as np 
# cap = cv2.VideoCapture('https://manifest.googlevideo.com/api/manifest/hls_playlist/id/QzQnFY6CioA.4/itag/91/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/cmbypass/yes/goi/160/sgoap/gir%3Dyes%3Bitag%3D139/sgovp/gir%3Dyes%3Bitag%3D160/hls_chunk_host/r3---sn-ugp2ax2a5t-qxae.googlevideo.com/gcr/in/playlist_type/DVR/dover/6/upn/Z4UDrO3Wga0/mm/32/mn/sn-ugp2ax2a5t-qxae/ms/lv/mt/1479389179/mv/u/pcm2cms/yes/pl/26/ip/150.129.238.118/ipbits/0/expire/1479410936/sparams/ip,ipbits,expire,id,itag,source,requiressl,ratebypass,live,cmbypass,goi,sgoap,sgovp,hls_chunk_host,gcr,playlist_type/signature/5C8FC6FA12BE7536689DEF217289D79E81474858.2DC4DDBEDB22C9C7B7164CE458BDDC08E4EBB34A/key/dg_yt0/playlist/index.m3u8')
# cap = cv2.VideoCapture(0)
# cap = cv2.VideoCapture('https://manifest.googlevideo.com/api/manifest/hls_playlist/id/QzQnFY6CioA.4/itag/91/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/cmbypass/yes/goi/160/sgoap/gir%3Dyes%3Bitag%3D139/sgovp/gir%3Dyes%3Bitag%3D160/hls_chunk_host/r12---sn-qxa7en7e.googlevideo.com/gcr/in/playlist_type/DVR/dover/6/upn/p8KKPrfCD7s/mm/32/mn/sn-qxa7en7e/ms/lv/mt/1479469914/mv/u/pl/24/ip/45.248.26.127/ipbits/0/expire/1479491711/sparams/ip,ipbits,expire,id,itag,source,requiressl,ratebypass,live,cmbypass,goi,sgoap,sgovp,hls_chunk_host,gcr,playlist_type/signature/787C009E87AB6373A25AD803FB0B7F44EF43A1B5.26BE7DA0255686B1E8049736A902C8113CF6AB37/key/dg_yt0/playlist/index.m3u8')
cap = cv2.VideoCapture('https://manifest.googlevideo.com/api/manifest/hls_playlist/id/QzQnFY6CioA.4/itag/92/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/cmbypass/yes/goi/160/sgoap/gir%3Dyes%3Bitag%3D139/sgovp/gir%3Dyes%3Bitag%3D133/hls_chunk_host/r12---sn-qxa7en7l.googlevideo.com/gcr/in/playlist_type/DVR/dover/6/upn/vTLBKq-tWyY/mm/32/mn/sn-qxa7en7l/ms/lv/mt/1479470131/mv/u/pl/24/ip/45.248.26.127/ipbits/0/expire/1479491807/sparams/ip,ipbits,expire,id,itag,source,requiressl,ratebypass,live,cmbypass,goi,sgoap,sgovp,hls_chunk_host,gcr,playlist_type/signature/32D55D7A1469D54DB415E3DCA490C9EE67CF23DB.58389E9B2AB87D81FE4288F43B469DA9FA21977A/key/dg_yt0/playlist/index.m3u8')
def test(url):
	print url
	cap = cv2.VideoCapture(url)
	i=0
	while(i < 150):
		abc , frame = cap.read()
		if not abc:
			print abc
			break
		cv2.imshow('frame',frame)
		k = cv2.waitKey(5) & 0xFF
		if k == 27:
			breakcv2.destroyAllWindows()
# # import os
# # url = "https://manifest.googlevideo.com/api/manifest/hls_playlist/id/QzQnFY6CioA.4/itag/91/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/cmbypass/yes/goi/160/sgoap/gir%3Dyes%3Bitag%3D139/sgovp/gir%3Dyes%3Bitag%3D160/hls_chunk_host/r3---sn-ugp2ax2a5t-qxae.googlevideo.com/gcr/in/playlist_type/DVR/dover/6/upn/Z4UDrO3Wga0/mm/32/mn/sn-ugp2ax2a5t-qxae/ms/lv/mt/1479389179/mv/u/pcm2cms/yes/pl/26/ip/150.129.238.118/ipbits/0/expire/1479410936/sparams/ip,ipbits,expire,id,itag,source,requiressl,ratebypass,live,cmbypass,goi,sgoap,sgovp,hls_chunk_host,gcr,playlist_type/signature/5C8FC6FA12BE7536689DEF217289D79E81474858.2DC4DDBEDB22C9C7B7164CE458BDDC08E4EBB34A/key/dg_yt0/playlist/index.m3u8"
# # # url = "https://www.youtube.com/watch?v=wuOURDhL-M8"
# # fileDir = os.path.dirname(os.path.realpath(__file__))
# # file_name = url.split('=')[-1]+'.mp4'
# # path = fileDir + "/../videos/" + file_name
# # os.system("youtube-dl -o "+ (path) + "  -prefer-ffmpeg" +url)
import youtube_dl

ydl = youtube_dl.YoutubeDL({'outtmpl': '%(id)s%(ext)s'})
result=[]
with ydl:
    result = ydl.extract_info(
        'https://www.youtube.com/watch?v=oMETNh3Tr0Q',
        # 'https://www.youtube.com/watch?v=z0biT27ypqw',
        download=False # We just want to extract the info
    )
videos=[]
if 'entries' in result:
    # Can be a playlist or a list of videos
    videos= result['entries'][0]
else:
    # Just a video
    videos = result
url = None
print videos.get('formats')[0].keys()
for i in xrange(len(videos.get('formats'))):
	# print videos.get('formats')[i].get('protocol')
	if videos.get('formats')[i].get('protocol') == 'https' or videos.get('formats')[i].get('protocol') == 'm3u8':
		url = videos.get('formats')[i].get('url')
		# print url	
		break
# print url
test(url)
# print video['is_live']
# video_url = video['url']
# print(video_url)
