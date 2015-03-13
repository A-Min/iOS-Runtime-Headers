/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class <NSSecureCoding>, NSDate, NSString;

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    int _category;
    NSString *_domain;
    NSString *_key;
    NSDate *_modificationDate;
    int _provenance;
    <NSSecureCoding> *_value;
}

@property(readonly) int category;
@property(readonly) NSString * domain;
@property(readonly) NSString * key;
@property(readonly) NSDate * modificationDate;
@property(readonly) int provenance;
@property(readonly) <NSSecureCoding> * value;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)category;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(int)arg4 provenance:(int)arg5 modificationDate:(id)arg6;
- (id)key;
- (id)modificationDate;
- (int)provenance;
- (id)value;

@end