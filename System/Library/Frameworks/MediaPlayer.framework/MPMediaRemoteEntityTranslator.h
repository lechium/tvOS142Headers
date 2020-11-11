/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator
+(void)buildSchemaIfNeeded;
-(id)identifiersForContentItem:(id)arg1 ;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3 ;
-(id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3 ;
-(void)mapIdentifierCreationBlock:(/*^block*/id)arg1 ;
-(void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2 ;
-(void)mapArtworkPropertyKey:(id)arg1 ;
-(void)mapPropertyKey:(id)arg1 toUserInfoKey:(id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toDeviceSpecificUserInfoKey:(id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toValueTransformer:(/*^block*/id)arg2 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 ;
@end

