//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol AXMasterSlide, AXSlide;

@protocol AXSlideList
- (id <AXSlide>)axNewSlideWithMaster:(id <AXMasterSlide>)arg1 atIndex:(unsigned int)arg2;
- (id <AXSlide>)axNewSlideWithMaster:(id <AXMasterSlide>)arg1;
- (id <AXSlide>)axGetSlide:(unsigned int)arg1;
- (unsigned int)axGetSlideCount;
@end

