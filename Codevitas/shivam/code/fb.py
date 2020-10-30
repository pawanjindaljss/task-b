import facebook

token = 'EAACEdEose0cBAGrXJmUZAubR5Kbnh1EDK3sEb5JaTictBZBBhIB610B7nZC4lc18YAdxnA2hNiIqjJxfEdlKEy7HCcIsPcyRzTCNnwnJ5BjZCVS6rsffeLA4JqYGi3l9bTAjonNgE44fKo6tUhml3hUer7kxqZAEE4i3JWVfoUZAzfFCLXIOvZBq9g5nnFPEHUZD'

graph = facebook.GraphAPI(access_token=token, version='2.7')

quiz_post_id = '1089245701183895'
quiz_message = 'The Bitcoin Whitepaper'
graph.put_comment(object_id=quiz_post_id, message=quiz_message)
