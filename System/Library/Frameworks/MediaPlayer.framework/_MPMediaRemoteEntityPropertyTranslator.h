/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPEntityPropertyTranslator.h>

@class NSString;

@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {

	NSString* _keyPath;
	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,readonly) NSString * keyPath;                  //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)translatorWithKeyPath:(id)arg1 ;
+(id)translatorWithBlock:(/*^block*/id)arg1 ;
-(NSString *)keyPath;
-(id)valueFromSource:(id)arg1 context:(id)arg2 ;
-(id)valueTransformBlock;
@end

