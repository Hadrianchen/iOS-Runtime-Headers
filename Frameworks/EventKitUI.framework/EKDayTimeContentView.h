/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView  {
    EKDayTimeView *_owner;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _hourRange;
}

@property EKDayTimeView * owner;
@property struct _NSRange { unsigned int x1; unsigned int x2; } hourRange;


- (void)setOwner:(id)arg1;
- (id)owner;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })hourRange;
- (void)setHourRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end