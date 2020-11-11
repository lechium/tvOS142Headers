/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AddressBookLegacy/ABPredicate.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@protocol ABPredicateDelegate;
@class DADConnection, DAContactsSearchQuery, NSMutableArray, NSConditionLock, NSString;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {

	void* _source;
	DADConnection* _connection;
	DAContactsSearchQuery* _searchQuery;
	NSMutableArray* _searchResults;
	NSConditionLock* _doneLock;
	int _error;
	BOOL _includeSourceInResults;
	BOOL _includePhotosInResults;
	NSString* _accountIdentifier;
	NSString* _searchString;
	id<ABPredicateDelegate> _delegate;

}

@property (nonatomic,retain) DADConnection * connection; 
@property (assign,nonatomic) void* source; 
@property (nonatomic,copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL includeSourceInResults;                   //@synthesize includeSourceInResults=_includeSourceInResults - In the implementation block
@property (assign,nonatomic) BOOL includePhotosInResults;                   //@synthesize includePhotosInResults=_includePhotosInResults - In the implementation block
@property (assign,nonatomic) id<ABPredicateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int error; 
-(void)dealloc;
-(id<ABPredicateDelegate>)delegate;
-(void)setDelegate:(id<ABPredicateDelegate>)arg1 ;
-(int)error;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 includePhotosInResults:(BOOL)arg5 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4 ;
-(id)querySerializationIdentifier;
-(void)setIncludeSourceInResults:(BOOL)arg1 ;
-(void)setIncludePhotosInResults:(BOOL)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 ;
-(BOOL)includePhotosInResults;
-(int)_errorForDAStatusCode:(long long)arg1 ;
-(void)runPredicate;
-(void)runPredicateWithDelegate:(id)arg1 ;
-(BOOL)includeSourceInResults;
-(void)_searchQueryIsDone;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 ;
@end

