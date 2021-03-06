//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, UIResponder, UITapGestureRecognizer, UIView, UIVisualEffectView, UIWindow;
@protocol UIPreviewPresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    BOOL _appliesVisualEffectsToPresentingView;
    id <UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    UIVisualEffectView *_presentationContainerEffectView;
    UIWindow *_statusBarWindow;
    UIView *_statusBarSnapshotView;
    NSArray *_keyboardSnapshotters;
    NSHashTable *_keyboardWindows;
    UIResponder *_currentPinnedResponder;
    UIWindow *_presentationWindow;
    CDUnknownBlockType _containerSuperviewFactoryBlock;
    CDUnknownBlockType _containerViewConfigurationBlock;
    CDUnknownBlockType _dismissalTransitionDidEndBlock;
}

+ (BOOL)_shouldApplyVisualEffectsToPresentingView;
+ (BOOL)_shouldInterdictServiceViewTouches;
+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissalTransitionDidEndBlock; // @synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock;
@property(copy, nonatomic) CDUnknownBlockType containerViewConfigurationBlock; // @synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock;
@property(copy, nonatomic) CDUnknownBlockType containerSuperviewFactoryBlock; // @synthesize containerSuperviewFactoryBlock=_containerSuperviewFactoryBlock;
@property(nonatomic) __weak UIWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(nonatomic) __weak UIResponder *currentPinnedResponder; // @synthesize currentPinnedResponder=_currentPinnedResponder;
@property(copy, nonatomic) NSHashTable *keyboardWindows; // @synthesize keyboardWindows=_keyboardWindows;
@property(copy, nonatomic) NSArray *keyboardSnapshotters; // @synthesize keyboardSnapshotters=_keyboardSnapshotters;
@property(retain, nonatomic) UIView *statusBarSnapshotView; // @synthesize statusBarSnapshotView=_statusBarSnapshotView;
@property(retain, nonatomic) UIWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property(retain, nonatomic) UIVisualEffectView *presentationContainerEffectView; // @synthesize presentationContainerEffectView=_presentationContainerEffectView;
@property(nonatomic) BOOL appliesVisualEffectsToPresentingView; // @synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak id <UIPreviewPresentationControllerDelegate> previewPresentationDelegate; // @synthesize previewPresentationDelegate=_previewPresentationDelegate;
- (void).cxx_destruct;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;
- (void)_cancelTransitionDidEnd:(BOOL)arg1;
- (void)_layoutForCancel;
- (void)_previewTransitionDidEnd:(BOOL)arg1;
- (void)_layoutForPreview;
- (void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1;
- (void)_layoutForInteractiveHighlight;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleDismissGestureRecognizer:(id)arg1;
- (void)_prepareDismissGestureRecognizersIfNeeded;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (id)_presentationContainerView;
- (void)_finalizeAfterDismissalTransition;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_prepareStatusBarForPresentationTransition;
- (BOOL)_shouldBlurStatusBar;
- (void)_prepareContainerViewForPresentationTransition;
- (id)_fullscreenPresentationSuperview;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

