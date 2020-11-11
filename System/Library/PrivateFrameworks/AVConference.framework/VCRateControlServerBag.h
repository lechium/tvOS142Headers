/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface VCRateControlServerBag : NSObject {

	NSDictionary* _serverBagDict;
	int _operatingMode;

}
+(id)profileNumberKeyWithMode:(int)arg1 ;
+(id)keysWithMode:(int)arg1 ;
+(id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2 ;
+(id)prefixForMode:(int)arg1 ;
-(void)dealloc;
-(BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)arg1 ;
-(id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3 ;
-(id)initWithMode:(int)arg1 serverBagDict:(id)arg2 ;
@end
