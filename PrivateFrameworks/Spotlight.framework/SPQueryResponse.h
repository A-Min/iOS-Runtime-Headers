/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPQueryResponse : NSObject {
    int  _kind;
    NSString * _rankingDebugLog;
    NSArray * _resultSections;
    NSString * _sessionEntityString;
    int  _state;
    SPQueryTask * _task;
}

@property (nonatomic) int kind;
@property (nonatomic, retain) NSString *rankingDebugLog;
@property (nonatomic, retain) NSArray *resultSections;
@property (nonatomic, retain) NSString *sessionEntityString;
@property (nonatomic) int state;
@property (nonatomic, retain) SPQueryTask *task;

- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (id)init;
- (id)initWithTask:(id)arg1;
- (int)kind;
- (id)rankingDebugLog;
- (id)resultSections;
- (id)sessionEntityString;
- (void)setKind:(int)arg1;
- (void)setRankingDebugLog:(id)arg1;
- (void)setResultSections:(id)arg1;
- (void)setSessionEntityString:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTask:(id)arg1;
- (int)state;
- (id)task;

@end