//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OMSynopsisPath : NSObject
{
    unsigned long long _collection;
    unsigned long long _group;
    unsigned long long _item;
}

+ (id)synopsisPathForItem:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
+ (id)synopsisPathForItem:(unsigned long long)arg1 inGroup:(unsigned long long)arg2 inCollection:(unsigned long long)arg3;
@property(readonly) unsigned long long item; // @synthesize item=_item;
@property(readonly) unsigned long long group; // @synthesize group=_group;
@property(readonly) unsigned long long collection; // @synthesize collection=_collection;

@end

