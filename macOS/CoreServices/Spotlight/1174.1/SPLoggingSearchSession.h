//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, PRSResult, SPStatistics;

@interface SPLoggingSearchSession : NSObject
{
    BOOL _hadQuery;
    BOOL _searchWindowDidExpand;
    BOOL _didEndByClearing;
    BOOL _receivedAnyParsecResponses;
    double _started;
    double _timeBeganPreviewingCurrentResult;
    NSString *_openMethod;
    PRSResult *_selectedResult;
    PRSResult *_previewedResult;
    NSString *_topHitCategory;
    NSArray *_allResultsCurrentlyBeingPresented;
    NSString *_query;
    NSString *_internetConnectionType;
    SPStatistics *_parsecQueryDurations;
    long long _parsecQueriesCompleted;
    long long _parsecQueriesLongerThan3CharactersCompleted;
    long long _parsecQueriesWithResults;
    long long _parsecQueriesErrored;
    NSString *_NLPParseConfidence;
}

@property(retain, nonatomic) NSString *NLPParseConfidence; // @synthesize NLPParseConfidence=_NLPParseConfidence;
@property(nonatomic) BOOL receivedAnyParsecResponses; // @synthesize receivedAnyParsecResponses=_receivedAnyParsecResponses;
@property(nonatomic) long long parsecQueriesErrored; // @synthesize parsecQueriesErrored=_parsecQueriesErrored;
@property(nonatomic) long long parsecQueriesWithResults; // @synthesize parsecQueriesWithResults=_parsecQueriesWithResults;
@property(nonatomic) long long parsecQueriesLongerThan3CharactersCompleted; // @synthesize parsecQueriesLongerThan3CharactersCompleted=_parsecQueriesLongerThan3CharactersCompleted;
@property(nonatomic) long long parsecQueriesCompleted; // @synthesize parsecQueriesCompleted=_parsecQueriesCompleted;
@property(readonly, nonatomic) SPStatistics *parsecQueryDurations; // @synthesize parsecQueryDurations=_parsecQueryDurations;
@property(retain, nonatomic) NSString *internetConnectionType; // @synthesize internetConnectionType=_internetConnectionType;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *allResultsCurrentlyBeingPresented; // @synthesize allResultsCurrentlyBeingPresented=_allResultsCurrentlyBeingPresented;
@property(retain, nonatomic) NSString *topHitCategory; // @synthesize topHitCategory=_topHitCategory;
@property(retain, nonatomic) PRSResult *previewedResult; // @synthesize previewedResult=_previewedResult;
@property(retain, nonatomic) PRSResult *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(nonatomic) BOOL didEndByClearing; // @synthesize didEndByClearing=_didEndByClearing;
@property(nonatomic) BOOL searchWindowDidExpand; // @synthesize searchWindowDidExpand=_searchWindowDidExpand;
@property(nonatomic) BOOL hadQuery; // @synthesize hadQuery=_hadQuery;
@property(retain, nonatomic) NSString *openMethod; // @synthesize openMethod=_openMethod;
@property(nonatomic) double timeBeganPreviewingCurrentResult; // @synthesize timeBeganPreviewingCurrentResult=_timeBeganPreviewingCurrentResult;
@property(nonatomic) double started; // @synthesize started=_started;
- (void).cxx_destruct;
- (void)parsecQuery:(id)arg1 didFinishWithDuration:(double)arg2 resultsCount:(long long)arg3 success:(BOOL)arg4;
- (id)init;

@end

