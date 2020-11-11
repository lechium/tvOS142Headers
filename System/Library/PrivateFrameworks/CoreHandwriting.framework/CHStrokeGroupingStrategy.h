/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHStrokeProvider;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSString;

@interface CHStrokeGroupingStrategy : NSObject {

	id<CHStrokeProvider> _strokeProvider;

}

@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;              //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,retain,readonly) NSString * strategyIdentifier; 
-(void)dealloc;
-(id<CHStrokeProvider>)strokeProvider;
-(void)getFirstStrokeIdentifier:(id*)arg1 lastStrokeIdentifier:(id*)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5 ;
-(id)initWithStrokeProvider:(id)arg1 ;
-(NSString *)strategyIdentifier;
-(id)strokesForIdentifiers:(id)arg1 ;
-(id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2 ;
-(id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(/*^block*/id)arg6 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(CGVector)arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5 ;
@end

