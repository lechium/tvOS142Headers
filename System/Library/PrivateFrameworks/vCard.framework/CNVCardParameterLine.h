/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNVCardParameterLine <CNVCardLine>
@required
-(void)addParameterWithName:(id)arg1 value:(id)arg2;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
-(BOOL)canSerializeWithStrategy:(id)arg1;
-(void)serializeValueWithStrategy:(id)arg1;

@end

