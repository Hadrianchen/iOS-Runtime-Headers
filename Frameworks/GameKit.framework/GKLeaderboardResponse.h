/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScoreInternal, NSArray;

@interface GKLeaderboardResponse : GKResponse {
    GKScoreInternal *_localScore;
    NSArray *_scores;
}

@property(retain) GKScoreInternal * localScore;
@property(retain) NSArray * scores;

+ (id)codedPropertyKeys;

- (void)dealloc;
- (id)description;
- (id)localScore;
- (id)scores;
- (void)setLocalScore:(id)arg1;
- (void)setScores:(id)arg1;

@end