#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_TankPiece.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_TankPiece : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieceAmount;
    
    UHbkItemObj_TankPiece();

};

