#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "ProcCPSpawnInfo.h"
#include "ProcCSSpawnInfo.h"
#include "ProcMPLSpawnInfo.h"
#include "ProcMPSSpawnInfo.h"
#include "ProcPortalSpawnInfo.h"
#include "ProcSAVSpawnInfo.h"
#include "ProcSPSP2SpawnInfo.h"
#include "TngSoundAssignToLayer.h"
#include "TngSoundGoogleTTSVoiceName.h"
#include "TngSoundGameplayStatics.generated.h"

class UWorld;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API UTngSoundGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTngSoundGameplayStatics();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetStreamingDistance(const FString& UmapName, TngSoundAssignToLayer AssignToLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetFrontAndBackRoomToSpecificWorldsPortals(UWorld* World, const FString& fullfilePathForDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetFrontAndBackRoomToPortals();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 ProceduralWithName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 ProceduralSourcesWithName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ProceduralSources();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 ProceduralSAVsAndPortalsWithName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ProceduralSAVsAndPortals();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void Procedural();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostMessageOnSlackChannel(const FString& Channel, const FString& UserName, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PlayFile(const FString& FilePathWithExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetSpatialAudioListenerPosition(FVector& Position, FVector& Front, FVector& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 GetProceduralSPSP2Info(TArray<FProcSPSP2SpawnInfo>& Infos, const FString& fullFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 GetProceduralSAVInfo(TArray<FProcSAVSpawnInfo>& Infos, const FString& fullFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 GetProceduralPortalInfo(TArray<FProcPortalSpawnInfo>& Infos, const FString& fullFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 GetProceduralMPInfo(TArray<FProcMPLSpawnInfo>& MPLInfos, TArray<FProcMPSSpawnInfo>& MPSInfos, const FString& fullFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 GetProceduralCanInfo(TArray<FProcCSSpawnInfo>& CSInfos, TArray<FProcCPSpawnInfo>& CPInfos, const FString& fullFilePath, bool bEnableCullingVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TEnumAsByte<ECollisionChannel> GetDefaultECollisionChannelForFX();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CreateGoogleTTSWavFile(const FString& Text, bool bSSML, const FString& outputFile, TngSoundGoogleTTSVoiceName VoiceName, float Pitch, float Rate, bool bSync);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CheckProceduralCSV();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 CheckOutFiles(TArray<FString> fullFilePaths);
    
};

