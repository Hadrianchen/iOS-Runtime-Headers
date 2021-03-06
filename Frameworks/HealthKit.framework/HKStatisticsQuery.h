/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface HKStatisticsQuery : HKQuery {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    unsigned int _mergeStrategy;
    unsigned int _options;
}

@property(readonly) id completionHandler;
@property unsigned int mergeStrategy;
@property(readonly) unsigned int options;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (unsigned int)mergeStrategy;
- (unsigned int)options;
- (void)setMergeStrategy:(unsigned int)arg1;

@end
