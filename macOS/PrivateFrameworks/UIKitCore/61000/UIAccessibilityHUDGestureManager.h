//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSMutableArray, NSString, UILongPressGestureRecognizer, UIView, UIViewController;
@protocol UIAccessibilityHUDGestureDelegate;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate>
{
    UIView *_view;
    id <UIAccessibilityHUDGestureDelegate> _delegate;
    UIViewController *_viewControllerDisplayingHUD;
    UILongPressGestureRecognizer *_recognizer;
    NSMutableArray *_subscribedConcurrentGestureRecognizers;
    BOOL _delegateDirectlyShowsHUD;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_gestureRecognizerChanged:(id)arg1;
- (id)_bestViewControllerForView;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_dismissAccessibilityHUD;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (void)_concurrentGestureRecognizerFired:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_clearButtonItemGestureSubscriptions;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

