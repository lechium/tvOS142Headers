/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {

	long long _enableState;
	MPModelObject* _identifyingModelObject;

}

@property (assign,nonatomic) long long enableState;                               //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;              //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
@end

