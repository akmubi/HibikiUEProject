#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkCharacter.h"
#include "HbkModelViewerModelActorAccessory.h"
#include "HbkModelViewerModelActor.generated.h"

class AHbkModelViewerModelActor;
class AHbkModelViewerModelCenter;

UCLASS(Blueprintable)
class AHbkModelViewerModelActor : public AHbkCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShowMeshKitNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideMeshKitNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkModelViewerModelActorAccessory> Accessories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkModelViewerModelCenter* MoveCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkModelViewerModelActor*> Friends;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DefaultTransform;
    
public:
    AHbkModelViewerModelActor(const FObjectInitializer& ObjectInitializer);

};

