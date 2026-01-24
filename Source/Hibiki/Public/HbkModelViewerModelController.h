#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkModelViewerModelControlMoveInfo.h"
#include "HbkModelViewerModelController.generated.h"

class AHbkModelViewerModelActor;
class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API AHbkModelViewerModelController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkModelViewerModelActor*> ModelActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkModelViewerModelControlMoveInfo DefaultMoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MovePresetDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModelViewerMoveDT;
    
public:
    AHbkModelViewerModelController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EndCopyBackBuffer();
    
    UFUNCTION(BlueprintCallable)
    void BeginCopyBackBuffer();
    
};

