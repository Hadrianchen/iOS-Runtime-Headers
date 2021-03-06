/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class AVAsset, CLLocation, NSDate, NSObject<OS_dispatch_queue>, NSString, NSURL, PHAdjustmentData, UIImage;

@interface PHContentEditingInput : NSObject {
    PHAdjustmentData *_adjustmentData;
    AVAsset *_avAsset;
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;
    int _baseVersion;
    NSDate *_creationDate;
    UIImage *_displaySizeImage;
    int _fullSizeImageOrientation;
    NSURL *_fullSizeImageURL;
    CLLocation *_location;
    unsigned int _mediaSubtypes;
    int _mediaType;
    long long _sandboxExtensionHandle;
    NSString *_uniformTypeIdentifier;
    NSURL *_videoURL;
}

@property(retain) PHAdjustmentData * adjustmentData;
@property(readonly) AVAsset * avAsset;
@property int baseVersion;
@property(copy) NSDate * creationDate;
@property(retain) UIImage * displaySizeImage;
@property int fullSizeImageOrientation;
@property(copy) NSURL * fullSizeImageURL;
@property(copy) CLLocation * location;
@property unsigned int mediaSubtypes;
@property int mediaType;
@property(copy) NSString * uniformTypeIdentifier;
@property(copy) NSURL * videoURL;

- (void).cxx_destruct;
- (void)_invalidateAVAsset;
- (id)adjustmentData;
- (id)audioMix;
- (id)avAsset;
- (int)baseVersion;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)displaySizeImage;
- (int)fullSizeImageOrientation;
- (id)fullSizeImageURL;
- (id)imagePreview;
- (id)init;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (void)loadFullSizeImageDataWithCompletionHandler:(id)arg1;
- (id)location;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (void)requestFullSizeImageURLWithCompletionHandler:(id)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(int)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImage:(id)arg1;
- (void)setFullSizeImageOrientation:(int)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoComposition;
- (id)videoURL;

@end
