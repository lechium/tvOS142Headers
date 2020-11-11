/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PTSettingsClassStructure, NSDictionary, PTModule;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding> {

	PTSettingsClassStructure* _structure;
	NSDictionary* _childDefinitions;
	NSDictionary* _defaultValueArchive;
	PTModule* _module;

}

@property (nonatomic,retain) PTSettingsClassStructure * structure;              //@synthesize structure=_structure - In the implementation block
@property (nonatomic,retain) NSDictionary * childDefinitions;                   //@synthesize childDefinitions=_childDefinitions - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultValueArchive;                //@synthesize defaultValueArchive=_defaultValueArchive - In the implementation block
@property (nonatomic,retain) PTModule * module;                                 //@synthesize module=_module - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)definitionForSettingsClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)settingsClass;
-(PTModule *)module;
-(void)setModule:(PTModule *)arg1 ;
-(BOOL)allSettingsClassesExistAndHaveCorrectVersion;
-(PTSettingsClassStructure *)structure;
-(NSDictionary *)defaultValueArchive;
-(NSDictionary *)childDefinitions;
-(void)setStructure:(PTSettingsClassStructure *)arg1 ;
-(void)setChildDefinitions:(NSDictionary *)arg1 ;
-(void)setDefaultValueArchive:(NSDictionary *)arg1 ;
@end

