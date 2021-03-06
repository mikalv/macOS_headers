//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MyMAKitPanel.h"

@class MAHUDWindowFrame, MATextField;

@interface MetaPluginWindow : MyMAKitPanel
{
    BOOL _calledWhileInSetStyleMask;
    MAHUDWindowFrame *customFrame;
    MATextField *_scaleFactorTextField;
}

@property(nonatomic) MATextField *scaleFactorTextField; // @synthesize scaleFactorTextField=_scaleFactorTextField;
@property(nonatomic) MAHUDWindowFrame *customFrame; // @synthesize customFrame;
- (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isTopMostMetaPluginWindow;
- (void)addContentSubview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)setStyleMask:(unsigned long long)arg1;
- (BOOL)isMovableByWindowBackground;
- (BOOL)showsToolbarButton;
- (void)setShowsToolbarButton:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)close;
- (void)performClose:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)buildCustomFrame;

@end

