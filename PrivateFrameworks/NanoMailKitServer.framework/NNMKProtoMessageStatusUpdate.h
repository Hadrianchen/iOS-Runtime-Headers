/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int statusVersion : 1; 
        unsigned int updatedStatus : 1; 
    } _has;
    NSString *_messageId;
    unsigned int _statusVersion;
    unsigned int _updatedStatus;
}

@property(readonly) BOOL hasMessageId;
@property BOOL hasStatusVersion;
@property BOOL hasUpdatedStatus;
@property(retain) NSString * messageId;
@property unsigned int statusVersion;
@property unsigned int updatedStatus;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMessageId;
- (BOOL)hasStatusVersion;
- (BOOL)hasUpdatedStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusVersion:(BOOL)arg1;
- (void)setHasUpdatedStatus:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setStatusVersion:(unsigned int)arg1;
- (void)setUpdatedStatus:(unsigned int)arg1;
- (unsigned int)statusVersion;
- (unsigned int)updatedStatus;
- (void)writeTo:(id)arg1;

@end
