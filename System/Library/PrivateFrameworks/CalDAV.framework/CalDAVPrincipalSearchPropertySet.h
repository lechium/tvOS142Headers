/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _stringProperties;

}

@property (nonatomic,retain) NSSet * stringProperties;                   //@synthesize stringProperties=_stringProperties - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setStringProperties:(NSSet *)arg1 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(id)initWithStringProperties:(id)arg1 ;
-(BOOL)supportsWellKnownType:(int)arg1 ;
-(BOOL)supportsPropertySearch;
-(BOOL)isEqualToPropertySet:(id)arg1 ;
@end

