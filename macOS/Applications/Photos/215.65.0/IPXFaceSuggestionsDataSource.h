//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXMondrianViewDataSource.h"

@class NSString, RDDatabase;

@interface IPXFaceSuggestionsDataSource : IPXMondrianViewDataSource
{
    NSString *_personName;
    RDDatabase *_database;
}

@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSString *personName; // @synthesize personName=_personName;
- (void).cxx_destruct;
- (CDUnknownBlockType)sectionItemsEquivalencyComparator;
- (id)newMediaSectionForItemsCollection:(id)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 personName:(id)arg2;

@end

