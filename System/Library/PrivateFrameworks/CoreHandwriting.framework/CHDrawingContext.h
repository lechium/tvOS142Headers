/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject {

	unsigned long long _edgeIndex;
	long long _numberOfSubstrokes;
	long long _numberOfSegments;
	CHClassifiableDrawing* _classifiableDrawing;
	set<long, std::__1::less<long>, std::__1::allocator<long> >* _strokeGroup;
	vector<long, std::__1::allocator<long> >* _delayedSegmentIDs;

}

@property (nonatomic,readonly) unsigned long long edgeIndex;                                    //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfSubstrokes;                                    //@synthesize numberOfSubstrokes=_numberOfSubstrokes - In the implementation block
@property (nonatomic,readonly) long long numberOfSegments;                                      //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (nonatomic,retain,readonly) CHClassifiableDrawing * classifiableDrawing;              //@synthesize classifiableDrawing=_classifiableDrawing - In the implementation block
@property (nonatomic,readonly) set<long strokeGroup;                                            //@synthesize strokeGroup=_strokeGroup - In the implementation block
@property (nonatomic,readonly) vector<long delayedSegmentIDs;                                   //@synthesize delayedSegmentIDs=_delayedSegmentIDs - In the implementation block
-(void)dealloc;
-(unsigned long long)edgeIndex;
-(long long)numberOfSegments;
-(CHClassifiableDrawing *)classifiableDrawing;
-(set<long)strokeGroup;
-(vector<long)delayedSegmentIDs;
-(long long)numberOfSubstrokes;
-(id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg5 delayedSegmentIDs:(vector<long, std::__1::allocator<long> >*)arg6 ;
@end

