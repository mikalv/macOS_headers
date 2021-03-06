//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseConversationViewController.h"

#import "M5WindowContentAreaViewControlling-Protocol.h"

@class CQFQuestionnaire, CQFQuestionnaireViewController, CQFRatingsViewController, CallQualityFeedbackHeaderViewController, NSString, NSTimer, NSView;

@interface CallQualityFeedbackViewController : BaseConversationViewController <M5WindowContentAreaViewControlling>
{
    BOOL _isAnimating;
    BOOL _questionnaireShown;
    BOOL _testInvocation;
    NSString *_trackingReason;
    NSString *_questionnaireID;
    NSView *_bodyContainerView;
    NSView *_headerContainerView;
    NSString *_callType;
    CQFQuestionnaire *_questionnaire;
    CQFRatingsViewController *_ratingsViewController;
    CallQualityFeedbackHeaderViewController *_headerViewController;
    CQFQuestionnaireViewController *_questionnaireViewController;
    NSTimer *_timer;
}

@property BOOL testInvocation; // @synthesize testInvocation=_testInvocation;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CQFQuestionnaireViewController *questionnaireViewController; // @synthesize questionnaireViewController=_questionnaireViewController;
@property(retain, nonatomic) CallQualityFeedbackHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) CQFRatingsViewController *ratingsViewController; // @synthesize ratingsViewController=_ratingsViewController;
@property(retain, nonatomic) CQFQuestionnaire *questionnaire; // @synthesize questionnaire=_questionnaire;
@property(copy, nonatomic) NSString *callType; // @synthesize callType=_callType;
@property BOOL questionnaireShown; // @synthesize questionnaireShown=_questionnaireShown;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) __weak NSView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) __weak NSView *bodyContainerView; // @synthesize bodyContainerView=_bodyContainerView;
@property(copy, nonatomic) NSString *questionnaireID; // @synthesize questionnaireID=_questionnaireID;
@property(copy, nonatomic) NSString *trackingReason; // @synthesize trackingReason=_trackingReason;
- (void).cxx_destruct;
- (id)preferredInitialFirstResponder;
- (id)closeContentViewMenuItemTitle;
- (BOOL)canUserCloseContentView;
- (BOOL)canCloseContentView;
- (void)sendFeedback;
- (void)close;
- (void)sendFeedbackAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)slideAnimationDidFinish;
- (void)showQuestionnaire;
- (void)finishRating:(id)arg1;
- (BOOL)loadQuestionnaire;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

