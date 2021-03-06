/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSData * objectData; 
@property (nonatomic,readonly) SCD_Struct_CS10 referenceOriginTransformation; 
-(id)description;
-(long long)version;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(SCD_Struct_CS10)referenceOriginTransformation;
-(NSData *)objectData;
@end

