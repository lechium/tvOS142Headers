/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLPersistentHistoryTransactionModifiers : NSObject {

	BOOL _syncChangeMarker;
	int _changeSource;

}

@property (assign,nonatomic) BOOL syncChangeMarker;              //@synthesize syncChangeMarker=_syncChangeMarker - In the implementation block
@property (assign,nonatomic) int changeSource;                   //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL isSyncable; 
+(id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
+(id)transactionModifiersFromTransactionAuthor:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setChangeSource:(int)arg1 ;
-(int)changeSource;
-(id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)encodeAsTransactionAuthor;
-(BOOL)updateFromTransactionAuthor:(id)arg1 ;
-(BOOL)isSyncable;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)_descriptionWithBuilder:(id)arg1 ;
-(BOOL)syncChangeMarker;
-(void)setSyncChangeMarker:(BOOL)arg1 ;
@end

