/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ALSCGreenClient : NSObject {

	BOOL _cachingAllowed;
	BOOL _key1Value;
	BOOL _key2Value;
	BOOL _key3Value;

}

@property (assign,nonatomic) BOOL key1Value;                      //@synthesize key1Value=_key1Value - In the implementation block
@property (assign,nonatomic) BOOL key2Value;                      //@synthesize key2Value=_key2Value - In the implementation block
@property (assign,nonatomic) BOOL key3Value;                      //@synthesize key3Value=_key3Value - In the implementation block
@property (nonatomic,readonly) BOOL valuesFinalized; 
-(id)init;
-(BOOL)_attemptReadingValuesFromDiskAndUpdateFileState;
-(void)setKey1Value:(BOOL)arg1 ;
-(void)setKey2Value:(BOOL)arg1 ;
-(void)setKey3Value:(BOOL)arg1 ;
-(BOOL)_readGreenKeysFromDictionary:(id)arg1 ;
-(BOOL)valuesFinalized;
-(BOOL)key1Value;
-(BOOL)key2Value;
-(BOOL)key3Value;
@end

