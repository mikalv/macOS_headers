//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class PARUsageEvent;

@interface PARCategory : NSManagedObject
{
    BOOL isGoTo;
    BOOL isPunchout;
    BOOL isTop;
    int clientIntVal;
    int resultTypeIntVal;
}

+ (id)fetchRequest;
@property(nonatomic) int resultTypeIntVal; // @synthesize resultTypeIntVal;
@property(nonatomic) BOOL isTop; // @synthesize isTop;
@property(nonatomic) BOOL isPunchout; // @synthesize isPunchout;
@property(nonatomic) BOOL isGoTo; // @synthesize isGoTo;
@property(nonatomic) int clientIntVal; // @synthesize clientIntVal;

// Remaining properties
@property(retain, nonatomic) PARUsageEvent *usageEvent; // @dynamic usageEvent;

@end

