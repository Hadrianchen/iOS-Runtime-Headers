/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDCharacteristic, NSError;

@interface HMDCharacteristicResponseTuple : NSObject {
    HMDCharacteristic *_characteristic;
    NSError *_error;
}

@property(readonly) HMDCharacteristic * characteristic;
@property(readonly) NSError * error;

+ (id)tupleWithCharacteristic:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)error;

@end