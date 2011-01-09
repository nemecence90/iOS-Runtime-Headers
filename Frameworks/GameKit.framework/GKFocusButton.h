/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme;



@interface GKFocusButton : UIButton 
{
    BOOL _previouslyMini;
    GKUITheme *_theme;
}

@property(retain) GKUITheme *theme;


- (void)setTheme:(id)arg1;
- (id)theme;
- (void)updateForMiniBarState:(BOOL)arg1;
- (void)dealloc;

@end