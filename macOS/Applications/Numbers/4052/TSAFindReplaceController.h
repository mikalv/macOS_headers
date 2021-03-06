//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKFindReplaceController.h"

@class NSDictionary, TSWPInteractiveCanvasController;
@protocol TSAFindReplaceControllerObserver;

@interface TSAFindReplaceController : TSKFindReplaceController
{
    BOOL _isInvalid;
    BOOL _returnFirstVisibleResultIfPossible;
    BOOL _isCollaborationSuspendedByFindReplace;
    BOOL _isReplacingText;
    TSWPInteractiveCanvasController *_interactiveCanvasController;
    NSDictionary *_visibleResults;
    id <TSAFindReplaceControllerObserver> _observer;
    id _layoutNotificationObserver;
    struct _NSRange _highlightsRange;
}

+ (id)unescapeFindQuery:(id)arg1;
@property(nonatomic) BOOL isReplacingText; // @synthesize isReplacingText=_isReplacingText;
@property(nonatomic) struct _NSRange highlightsRange; // @synthesize highlightsRange=_highlightsRange;
@property(nonatomic) id layoutNotificationObserver; // @synthesize layoutNotificationObserver=_layoutNotificationObserver;
@property(nonatomic) id <TSAFindReplaceControllerObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) BOOL isCollaborationSuspendedByFindReplace; // @synthesize isCollaborationSuspendedByFindReplace=_isCollaborationSuspendedByFindReplace;
@property(nonatomic) BOOL returnFirstVisibleResultIfPossible; // @synthesize returnFirstVisibleResultIfPossible=_returnFirstVisibleResultIfPossible;
@property(retain, nonatomic) NSDictionary *visibleResults; // @synthesize visibleResults=_visibleResults;
@property(nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)locateSearchReference:(id)arg1;
- (void)didReplaceAllOccurrencesOfString;
- (unsigned long long)replaceAllOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)replaceWithString:(id)arg1 findAgain:(BOOL)arg2;
- (void)findNextResultInDirection:(unsigned long long)arg1 shouldPulse:(BOOL)arg2;
- (void)findNextResultInDirection:(unsigned long long)arg1;
- (void)exitCanvasFindMode;
- (void)enterCanvasFindMode:(id)arg1;
- (void)assignObserver:(id)arg1;
- (void)p_unregisterObservers;
- (void)p_registerObservers;
- (void)p_didUpdateFromLayout:(id)arg1;
- (void)p_didUndoRedo:(id)arg1;
- (void)canvasDidChange:(id)arg1;
- (void)disableSearchHighlights;
- (void)enableSearchHighlightsIfNecessary;
- (BOOL)searchHighlightsEnabled;
- (void)updateHighlights;
- (void)invalidateSearchHighlights;
- (id)findResultAtCanvasPoint:(struct CGPoint)arg1;
- (void)pulseSearchResult:(id)arg1 autohiding:(BOOL)arg2;
- (void)setSearchString:(id)arg1;
- (void)invalidateSearchResults;
- (void)abortCollaborativeTimer;
- (void)resetCollaborativeTimer;
- (double)timeout;
- (void)p_timerDidTrigger;
- (void)dealloc;
- (id)init;

@end

