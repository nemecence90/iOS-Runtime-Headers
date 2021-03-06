/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int _style;
    UILabel *_titleView;
    UILabel *_value2View;
    UILabel *_valueView;
}

@property(readonly) unsigned int visibleItems;

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (int)style;
- (id)titleView;
- (BOOL)update;
- (id)value2View;
- (id)valueView;
- (unsigned int)visibleItems;

@end
