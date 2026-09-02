positive_words = {
    "good", "great", "excellent", "best", "amazing",
    "cost-effective", "cost", "recommend", "durable",
    "quality", "happy", "impressed", "love", "useful"
}
negative_words = {
    "bad", "poor", "worst", "expensive", "heavy",
    "disappointed", "not", "hate", "impressed",
    "problem", "poor-quality", "buy"
}
def sentiment_analysis(comment):
    words = comment.lower().split()
    positive_count = 0
    negative_count = 0

    for word in words:
        word = word.strip(".,!?;:")
        if word in positive_words:
            positive_count += 1
        if word in negative_words:
            negative_count += 1
total_score = positive_count-negative_count
    if positive_count > 0 and negative_count > 0:
        sentiment = "Neutral"
    elif total_score > 0:
        sentiment = "Positive"
    elif total_score < 0:
        sentiment = "Negative"
    else:
        sentiment = "Neutral"
    return positive_count, negative_count, total_score, sentiment

