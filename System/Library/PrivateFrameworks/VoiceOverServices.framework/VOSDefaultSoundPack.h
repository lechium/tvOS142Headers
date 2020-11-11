/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VOSSoundPack.h>

@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>

@property (nonatomic,readonly) NSDictionary * eventToSoundFilenameMapping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)eventToSoundFilenameMapping;
-(id)soundAssetURLForOutputEvent:(id)arg1 ;
@end

