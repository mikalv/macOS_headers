//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "STItemView.h"

#import "DDSTErrorItemStateDelegate-Protocol.h"
#import "DDSTItemStateContext-Protocol.h"
#import "DDSTOverviewItemStateDelegate-Protocol.h"
#import "DDSTProgressItemStateDelegate-Protocol.h"

@class DDSTErrorItemState, DDSTItemState, DDSTItemStateSwitcherVisitor, DDSTOverviewItemState, DDSTProgressItemState, NSString, STTableViewStyles;
@protocol DDSTItemViewContext, DDSTItemViewDelegate, IXHostProtocol;

@interface DDSTItemView : STItemView <DDSTItemStateContext, DDSTOverviewItemStateDelegate, DDSTProgressItemStateDelegate, DDSTErrorItemStateDelegate>
{
    DDSTOverviewItemState *_overviewState;
    DDSTProgressItemState *_progressState;
    DDSTErrorItemState *_errorState;
    DDSTItemStateSwitcherVisitor *_stateSwitcherVisitor;
    long long _sizeMathBase;
    BOOL _isOverviewGaugeless;
    BOOL _isHot;
    BOOL _isHidden;
    id <DDSTItemViewDelegate> _delegate;
}

@property(nonatomic, setter=setHidden:) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic, setter=setHot:) BOOL isHot; // @synthesize isHot=_isHot;
@property(nonatomic, setter=setOverviewGaugeless:) BOOL isOverviewGaugeless; // @synthesize isOverviewGaugeless=_isOverviewGaugeless;
@property(readonly, nonatomic) DDSTErrorItemState *errorState; // @synthesize errorState=_errorState;
@property(readonly, nonatomic) DDSTProgressItemState *progressState; // @synthesize progressState=_progressState;
@property(readonly, nonatomic) DDSTOverviewItemState *overviewState; // @synthesize overviewState=_overviewState;
@property(nonatomic) id <DDSTItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long sizeMathBase; // @synthesize sizeMathBase=_sizeMathBase;
- (BOOL)hasKeyView:(id)arg1;
@property(nonatomic, setter=setAdmin:) BOOL isAdmin;
@property(nonatomic, setter=setReady:) BOOL isReady;
@property(readonly, nonatomic) double commonButtonWidth;
- (void)setErrorState;
- (id)getOrMakeErrorState;
- (void)setProgressStateWithAnimation:(BOOL)arg1;
- (id)getOrMakeProgressState;
@property(readonly, nonatomic) BOOL isProgressState;
- (void)setOverviewStateWithAnimation:(BOOL)arg1;
- (id)getOrMakeOverviewState;
- (void)switchKeyboardFocusToState:(id)arg1;
- (id)factoryErrorState;
- (id)factoryProgressState;
- (id)factoryOverviewState;
- (void)dealloc;
- (id)initWithExtendedContext:(id)arg1 sizeMathBase:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) double backingScaleFactor;
@property(readonly, nonatomic) id <DDSTItemViewContext> context; // @dynamic context;
@property(readonly, nonatomic) DDSTItemState *currentState; // @dynamic currentState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <IXHostProtocol> ixHost;
@property(readonly, nonatomic) STTableViewStyles *styles;
@property(readonly) Class superclass;

@end

