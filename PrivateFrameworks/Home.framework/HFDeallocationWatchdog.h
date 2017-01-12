/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDeallocationWatchdog : NSObject {
    id /* block */  _finalizer;
    id  _object;
}

@property (nonatomic, copy) id /* block */ finalizer;
@property (nonatomic, readonly) id object;

+ (void)startMonitoringTargetObject:(id)arg1 key:(const void*)arg2 finalizer:(id /* block */)arg3;
+ (void)stopMonitoringTargetObject:(id)arg1 key:(const void*)arg2;

- (void).cxx_destruct;
- (id)_initWithTargetObject:(id)arg1 finalizer:(id /* block */)arg2;
- (void)dealloc;
- (id /* block */)finalizer;
- (id)object;
- (void)setFinalizer:(id /* block */)arg1;

@end