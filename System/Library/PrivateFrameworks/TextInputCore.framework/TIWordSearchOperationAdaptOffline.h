/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper, TILanguageModelAdaptationContext, NSString;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	TILanguageModelAdaptationContext* _adaptationContext;
	NSString* _paragraph;
	double _timeStamp;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                               //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * adaptationContext;              //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (nonatomic,copy) NSString * paragraph;                                              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) double timeStamp;                                                //@synthesize timeStamp=_timeStamp - In the implementation block
-(void)cancel;
-(double)timeStamp;
-(void)perform;
-(void)setTimeStamp:(double)arg1 ;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(NSString *)paragraph;
-(void)setParagraph:(NSString *)arg1 ;
@end
