/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI95)arg1 ;
-(UIKBHandwritingPointFIFO *)nextFIFO;
-(void)emitPoint:(SCD_Struct_UI95)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg1 ;
@end

