/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class <HSMediaLibraryImportObserverDelegate>, NSTimer;

@interface HSMediaLibraryImportObserver : NSObject {
    unsigned long long _consecutiveUpdateFailures;
    <HSMediaLibraryImportObserverDelegate> *_delegate;
    double _updateInterval;
    NSTimer *_updateTimer;
    bool_stopped;
    bool_updating;
}

@property <HSMediaLibraryImportObserverDelegate> * delegate;
@property double updateInterval;
@property(getter=isUpdating,readonly) bool updating;

- (void).cxx_destruct;
- (void)_updateImportStatus:(id)arg1;
- (void)beginUpdating;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isUpdating;
- (void)setDelegate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)stopUpdating;
- (double)updateInterval;

@end