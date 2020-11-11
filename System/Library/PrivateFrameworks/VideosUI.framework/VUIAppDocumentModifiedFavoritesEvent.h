/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _addedEntityIDs;
	NSSet* _removedEntityIDs;

}

@property (nonatomic,copy) NSSet * addedEntityIDs;                //@synthesize addedEntityIDs=_addedEntityIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedEntityIDs;              //@synthesize removedEntityIDs=_removedEntityIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(id)initWithAddedEntityIDs:(id)arg1 removedEntityIDs:(id)arg2 ;
-(NSSet *)addedEntityIDs;
-(NSSet *)removedEntityIDs;
-(id)initWithAction:(unsigned long long)arg1 entityID:(id)arg2 ;
-(id)coalescedEvent:(id)arg1 ;
-(void)setAddedEntityIDs:(NSSet *)arg1 ;
-(void)setRemovedEntityIDs:(NSSet *)arg1 ;
@end

