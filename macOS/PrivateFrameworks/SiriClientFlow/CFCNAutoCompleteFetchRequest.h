//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class CFCNAutoCompleteFetchContext, NSArray, NSString;

@interface CFCNAutoCompleteFetchRequest : SADomainCommand <SAAceSerializable>
{
}

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *searchType;
@property(copy, nonatomic) NSString *searchString;
@property(copy, nonatomic) NSString *priorityDomainForSorting;
@property(copy, nonatomic) NSArray *fetchRequestOptions;
@property(retain, nonatomic) CFCNAutoCompleteFetchContext *fetchContext;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

