/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface TextColumn : NSObject {

	NSMutableArray* _mutableRows;

}

@property (nonatomic,retain) NSMutableArray * mutableRows;              //@synthesize mutableRows=_mutableRows - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rows; 
@property (readonly) unsigned long long rowCount; 
-(id)init;
-(unsigned long long)rowCount;
-(NSArray *)rows;
-(id)initWithRows:(id)arg1 ;
-(void)addRow:(id)arg1 ;
-(void)setMutableRows:(NSMutableArray *)arg1 ;
-(void)sortRowsInAscendingOrder;
-(NSMutableArray *)mutableRows;
@end

