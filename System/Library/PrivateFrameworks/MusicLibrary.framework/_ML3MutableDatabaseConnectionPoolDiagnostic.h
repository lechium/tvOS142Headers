/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (nonatomic,copy) NSArray * readerAvailableConnections; 
@property (nonatomic,copy) NSArray * readerBusyConnections; 
@property (nonatomic,copy) NSArray * writerAvailableConnections; 
@property (nonatomic,copy) NSArray * writerBusyConnections; 
-(void)setReaderAvailableConnections:(NSArray *)arg1 ;
-(void)setReaderBusyConnections:(NSArray *)arg1 ;
-(void)setWriterAvailableConnections:(NSArray *)arg1 ;
-(void)setWriterBusyConnections:(NSArray *)arg1 ;
@end
