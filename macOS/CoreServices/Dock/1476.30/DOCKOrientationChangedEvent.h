//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DOCKEvent.h"

@interface DOCKOrientationChangedEvent : DOCKEvent
{
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)perform:(CDStruct_95d471ab *)arg1;
- (id)initWithOrientation:(int)arg1;

@end

