/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSStoreMappingGenerator : NSObject
+(void)invalidate;
+(id)defaultMappingGenerator;
-(id)externalNameForEntityName:(id)arg1 ;
-(id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)externalNameForPropertyName:(id)arg1 ;
-(id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)primaryKeyForEntity:(id)arg1 ;
-(id)joinsForRelationship:(id)arg1 ;
-(id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)internalNameForEntityName:(id)arg1 version:(int)arg2 ;
-(id)internalNameForPropertyName:(id)arg1 version:(int)arg2 ;
@end

