//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABSuggestionLogging-Protocol.h>

@class NSString;
@protocol ABSuggestionLogging;

__attribute__((visibility("hidden")))
@interface ABDSanitizedLoggerDecorator : NSObject <ABSuggestionLogging>
{
    id <ABSuggestionLogging> _logger;
}

@property(retain, nonatomic) id <ABSuggestionLogging> logger; // @synthesize logger=_logger;
- (void)dealloc;
- (void)logPairs:(id)arg1 withMessage:(id)arg2;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

