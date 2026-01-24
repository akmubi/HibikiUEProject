#include "TngSoundGameplayStatics.h"

UTngSoundGameplayStatics::UTngSoundGameplayStatics() {
}

void UTngSoundGameplayStatics::SetStreamingDistance(const FString& UmapName, TngSoundAssignToLayer AssignToLayer) {
}

void UTngSoundGameplayStatics::SetFrontAndBackRoomToSpecificWorldsPortals(UWorld* World, const FString& fullfilePathForDebug) {
}

void UTngSoundGameplayStatics::SetFrontAndBackRoomToPortals() {
}

int32 UTngSoundGameplayStatics::ProceduralWithName(const FString& Name) {
    return 0;
}

int32 UTngSoundGameplayStatics::ProceduralSourcesWithName(const FString& Name) {
    return 0;
}

void UTngSoundGameplayStatics::ProceduralSources() {
}

int32 UTngSoundGameplayStatics::ProceduralSAVsAndPortalsWithName(const FString& Name) {
    return 0;
}

void UTngSoundGameplayStatics::ProceduralSAVsAndPortals() {
}

void UTngSoundGameplayStatics::Procedural() {
}

void UTngSoundGameplayStatics::PostMessageOnSlackChannel(const FString& Channel, const FString& UserName, const FString& Message) {
}

int32 UTngSoundGameplayStatics::PlayFile(const FString& FilePathWithExtension) {
    return 0;
}

void UTngSoundGameplayStatics::GetSpatialAudioListenerPosition(FVector& Position, FVector& Front, FVector& Right) {
}

int32 UTngSoundGameplayStatics::GetProceduralSPSP2Info(TArray<FProcSPSP2SpawnInfo>& Infos, const FString& fullFilePath) {
    return 0;
}

int32 UTngSoundGameplayStatics::GetProceduralSAVInfo(TArray<FProcSAVSpawnInfo>& Infos, const FString& fullFilePath) {
    return 0;
}

int32 UTngSoundGameplayStatics::GetProceduralPortalInfo(TArray<FProcPortalSpawnInfo>& Infos, const FString& fullFilePath) {
    return 0;
}

int32 UTngSoundGameplayStatics::GetProceduralMPInfo(TArray<FProcMPLSpawnInfo>& MPLInfos, TArray<FProcMPSSpawnInfo>& MPSInfos, const FString& fullFilePath) {
    return 0;
}

int32 UTngSoundGameplayStatics::GetProceduralCanInfo(TArray<FProcCSSpawnInfo>& CSInfos, TArray<FProcCPSpawnInfo>& CPInfos, const FString& fullFilePath, bool bEnableCullingVolume) {
    return 0;
}

TEnumAsByte<ECollisionChannel> UTngSoundGameplayStatics::GetDefaultECollisionChannelForFX() {
    return ECC_WorldStatic;
}

void UTngSoundGameplayStatics::CreateGoogleTTSWavFile(const FString& Text, bool bSSML, const FString& outputFile, TngSoundGoogleTTSVoiceName VoiceName, float Pitch, float Rate, bool bSync) {
}

void UTngSoundGameplayStatics::CheckProceduralCSV() {
}

int32 UTngSoundGameplayStatics::CheckOutFiles(TArray<FString> fullFilePaths) {
    return 0;
}


